/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/WK_RTCVideoDecoder.h>

@class NSString;

@interface RTCWrappedNativeVideoDecoder : NSObject <WK_RTCVideoDecoder> {

	unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder> >* _wrappedDecoder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(/*^block*/id)arg1 ;
-(unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder> >*)releaseWrappedDecoder;
-(id)implementationName;
-(long long)startDecodeWithNumberOfCores:(int)arg1 ;
-(long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2 ;
-(long long)decode:(id)arg1 missingFrames:(BOOL)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4 ;
-(long long)releaseDecoder;
-(id)initWithNativeDecoder:(unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder> >*)arg1 ;
@end

