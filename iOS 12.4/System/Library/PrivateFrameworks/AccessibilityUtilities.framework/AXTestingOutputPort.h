/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioSessionPortDescription.h>

@class NSString, NSArray;

@interface AXTestingOutputPort : AVAudioSessionPortDescription {

	NSString* portType;
	NSString* portName;
	NSString* UID;
	NSArray* _ttsChannels;

}

@property (retain) NSString * portType; 
@property (retain) NSString * portName; 
@property (retain) NSString * UID; 
@property (retain) NSArray * ttsChannels;              //@synthesize ttsChannels=_ttsChannels - In the implementation block
-(NSString *)portType;
-(void)setPortType:(NSString *)arg1 ;
-(void)setUID:(NSString *)arg1 ;
-(NSArray *)ttsChannels;
-(void)setPortName:(NSString *)arg1 ;
-(void)setTtsChannels:(NSArray *)arg1 ;
-(NSString *)UID;
-(NSString *)portName;
-(id)channels;
@end

