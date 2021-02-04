/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/WK_RTCI420Buffer.h>

@protocol WK_RTCI420Buffer <RTCYUVPlanarBuffer>
@end


@class NSString;

@interface WK_RTCI420Buffer : NSObject <WK_RTCI420Buffer> {

	scoped_refptr<webrtc::I420BufferInterface>* _i420Buffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) int chromaWidth; 
@property (nonatomic,readonly) int chromaHeight; 
@property (nonatomic,readonly) const char* dataY; 
@property (nonatomic,readonly) const char* dataU; 
@property (nonatomic,readonly) const char* dataV; 
@property (nonatomic,readonly) int strideY; 
@property (nonatomic,readonly) int strideU; 
@property (nonatomic,readonly) int strideV; 
-(id)toI420;
-(id)initWithFrameBuffer:(scoped_refptr<webrtc::I420BufferInterface>*)arg1 ;
-(int)strideY;
-(int)strideU;
-(int)strideV;
-(const char*)dataY;
-(const char*)dataU;
-(const char*)dataV;
-(id)initWithWidth:(int)arg1 height:(int)arg2 dataY:(const char*)arg3 dataU:(const char*)arg4 dataV:(const char*)arg5 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 strideY:(int)arg3 strideU:(int)arg4 strideV:(int)arg5 ;
-(int)chromaWidth;
-(int)chromaHeight;
-(scoped_refptr<webrtc::I420BufferInterface>*)nativeI420Buffer;
-(id)initWithWidth:(int)arg1 height:(int)arg2 ;
-(int)width;
-(int)height;
@end
