/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMFSystemInfoMigrationDataSource <NSObject>
@property (__weak) id<HMFSystemInfoMigrationDataSourceDelegate> delegate; 
@property (getter=isMigrating,nonatomic,readonly) BOOL migrating; 
@required
-(BOOL)isMigrating;
-(void)setDelegate:(id)arg1;
-(id<HMFSystemInfoMigrationDataSourceDelegate>)delegate;

@end

