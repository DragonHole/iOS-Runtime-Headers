/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HMDAccessorySettingMergeHandler : NSObject
+(BOOL)mergeFirst:(id)arg1 second:(id)arg2 mergeStrategy:(id)arg3 ;
+(id)_mergeValidValueConstaintsFirst:(id)arg1 second:(id)arg2 ;
+(id)_mergeRangeConstaintsFirst:(id)arg1 second:(id)arg2 ;
+(id)_mergeFirst:(id)arg1 second:(id)arg2 mergedConstraints:(id)arg3 mergeStrategy:(id)arg4 ;
+(BOOL)_extractMinMaxStep:(id)arg1 minConstraint:(id*)arg2 maxConstraint:(id*)arg3 stepConstraint:(id*)arg4 first:(id)arg5 ;
+(BOOL)_isNumber:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3 first:(id)arg4 ;
@end

