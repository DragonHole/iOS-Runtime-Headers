/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLPersonClusterUsabilityPreferences.h>

@class NSString;

@interface PLPhotoLibraryUsabilityCriteriaPreferences : NSObject <PLPersonClusterUsabilityPreferences>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long unverifiedFaceCountThreshold; 
@property (nonatomic,readonly) unsigned long long maxUnverifiedClusters; 
-(unsigned long long)unverifiedFaceCountThreshold;
-(void)setUnverifiedFaceCountThreshold:(unsigned long long)arg1 ;
-(unsigned long long)maxUnverifiedClusters;
@end

