/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKDevice, CLKVideo, UIImage;

@interface CLKMediaAsset : NSObject <NSCopying> {

	CLKDevice* _device;
	CLKVideo* _video;
	UIImage* _image;
	double _videoDuration;
	double _stillDisplayTime;

}

@property (nonatomic,readonly) CLKVideo * video;                     //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) double videoDuration;                 //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) double stillDisplayTime;              //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
+(id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3 ;
+(id)mediaAssetWithVideoAndImageNamed:(id)arg1 forDevice:(id)arg2 ;
+(id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5 ;
+(id)mediaAssetWithImage:(id)arg1 forDevice:(id)arg2 ;
-(CLKVideo *)video;
-(double)stillDisplayTime;
-(double)videoDuration;
-(id)initWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3 ;
-(id)initWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5 ;
-(id)initWithImage:(id)arg1 forDevice:(id)arg2 ;
-(id)description;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

