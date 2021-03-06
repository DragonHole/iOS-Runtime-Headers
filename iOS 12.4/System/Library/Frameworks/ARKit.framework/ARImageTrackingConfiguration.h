/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARConfiguration.h>

@class NSSet;

@interface ARImageTrackingConfiguration : ARConfiguration {

	NSSet* _trackingImages;
	long long _maximumNumberOfTrackedImages;

}

@property (assign,getter=isAutoFocusEnabled,nonatomic) BOOL autoFocusEnabled; 
@property (nonatomic,copy) NSSet * trackingImages;                                         //@synthesize trackingImages=_trackingImages - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfTrackedImages;                       //@synthesize maximumNumberOfTrackedImages=_maximumNumberOfTrackedImages - In the implementation block
+(id)supportedVideoFormats;
+(BOOL)isSupported;
+(id)new;
-(long long)maximumNumberOfTrackedImages;
-(NSSet *)trackingImages;
-(void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2 ;
-(void)setMaximumNumberOfTrackedImages:(long long)arg1 ;
-(void)setTrackingImages:(NSSet *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

