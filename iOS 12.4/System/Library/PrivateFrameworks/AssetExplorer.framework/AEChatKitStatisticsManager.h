/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AEHostStatisticsManager.h>

@class NSString;

@interface AEChatKitStatisticsManager : NSObject <AEHostStatisticsManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reportPresentationOfFullScreenCamera;
-(void)reportPresentationOfFullScreenPhotoLibrary;
-(void)reportSelectionOfPhotoGridIndex:(unsigned long long)arg1 ;
-(void)reportPayloadSentFromSource:(long long)arg1 ;
@end

