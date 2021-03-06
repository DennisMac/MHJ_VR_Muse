// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from sdk_bridge.djinni

#import <Foundation/Foundation.h>

/**
 * \if IOS_ONLY
 * \file
 * \endif
 * Configures the playback speed and timestamps of a \classlink{ReaderMuse}
 *
 * \sa \classlink{ReaderMuse}
 * \sa \classlink{ReaderMuseBuilder}
 */
typedef NS_ENUM(NSInteger, IXNReaderMusePlaybackSettings)
{
    /**
     * The \classlink{ReaderMuse}
     * should playback the data as fast as it can be read from
     * the file.  There will be no simulated time between packets
     * and the timestamps of the packets created during playback
     * will match the timestamps that are saved in the file.
     */
    IXNReaderMusePlaybackSettingsAsFastAsPossibleWithSavedTimestamp,
    /**
     * The \classlink{ReaderMuse}
     * should playback the data simulating the time between packets.
     * For example, if the second packet in the file has a timestamp that
     * is 20ms later than the timestamp of the first packet, then LibMuse
     * will wait for 20ms after the first packet is sent before sending
     * the second packet. The timestamps of the packets created during playback
     * will match the timestamps that are saved in the file.
     * <br>
     *
     * Using this setting requires that the \classlink{ReaderMuse} be constructed with
     * an \classlink{EventLoop}
     * that will be used to simulate the time between packets.  If this setting
     * is used, but the \classlink{ReaderMuse}
     * does not have an \classlink{EventLoop}
     * then playback will not read the file and a warning will be logged.
     */
    IXNReaderMusePlaybackSettingsSimulatedWithSavedTimestamp,
    /**
     * The \classlink{ReaderMuse}
     * should playback the data simulating the time between packets.
     * For example, if the second packet in the file has a timestamp that
     * is 20ms later than the timestamp of the first packet, then LibMuse
     * will wait for 20ms after the first packet is sent before sending
     * the second packet. The timestamps of the packets created during playback
     * will use the current times of the system clock rather than the timestamp
     * of the packet saved in the file.
     * <br>
     *
     * Using this setting requires that the \classlink{ReaderMuse} be constructed with
     * an \classlink{EventLoop}
     * that will be used to simulate the time between packets.  If this setting
     * is used, but the \classlink{ReaderMuse}
     * does not have an \classlink{EventLoop}
     * then playback will not read the file and a warning will be logged.
     */
    IXNReaderMusePlaybackSettingsSimulatedWithSystemClockTimestamp,
};
