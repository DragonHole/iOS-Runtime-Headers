/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSSettingsSyncManager <NSObject>
@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<DNDSSettingsSyncManagerDelegate> delegate; 
@required
-(id<DNDSSettingsSyncManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)resume;
-(void)update;
-(id<DNDSSettingsSyncManagerDataSource>)dataSource;
-(void)setDataSource:(id)arg1;

@end

