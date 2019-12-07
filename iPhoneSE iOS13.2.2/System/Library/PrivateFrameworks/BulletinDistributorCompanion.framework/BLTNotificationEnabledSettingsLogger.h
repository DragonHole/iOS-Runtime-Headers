/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BLTSectionInfoList;

@interface BLTNotificationEnabledSettingsLogger : NSObject {

	double _lastLogTime;
	BLTSectionInfoList* _sectionInfoList;

}

@property (nonatomic,retain) BLTSectionInfoList * sectionInfoList;              //@synthesize sectionInfoList=_sectionInfoList - In the implementation block
+(id)sharedNotificationEnabledSettingsLogger:(id)arg1 ;
-(id)init;
-(void)_log;
-(void)_performActivity:(id)arg1 ;
-(void)_registerActivity;
-(void)setSectionInfoList:(BLTSectionInfoList *)arg1 ;
-(BLTSectionInfoList *)sectionInfoList;
@end
