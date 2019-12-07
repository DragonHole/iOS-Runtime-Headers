/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/WK_RTCCodecSpecificInfo.h>

@class NSString;

@interface WK_RTCCodecSpecificInfoH264 : NSObject <WK_RTCCodecSpecificInfo> {

	unsigned long long _packetizationMode;

}

@property (assign,nonatomic) unsigned long long packetizationMode;              //@synthesize packetizationMode=_packetizationMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)packetizationMode;
-(void)setPacketizationMode:(unsigned long long)arg1 ;
-(CodecSpecificInfo)nativeCodecSpecificInfo;
@end
