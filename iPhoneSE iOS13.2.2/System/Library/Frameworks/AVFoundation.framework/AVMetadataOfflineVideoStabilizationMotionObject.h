/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataOfflineVideoStabilizationMotionObjectInternal, NSDictionary;

@interface AVMetadataOfflineVideoStabilizationMotionObject : AVMetadataObject <NSCopying> {

	AVMetadataOfflineVideoStabilizationMotionObjectInternal* _offlineVISMotionObjectInternal;

}

@property (readonly) NSDictionary * payload; 
+(id)offlineVideoStabilizationMotionObjectWithTime:(SCD_Struct_AV7)arg1 motionDictionary:(id)arg2 input:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)payload;
-(id)initWithTime:(SCD_Struct_AV7)arg1 motionDictionary:(id)arg2 input:(id)arg3 ;
@end

