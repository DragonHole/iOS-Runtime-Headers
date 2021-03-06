/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDictionary;


@protocol ACHDataStorePropertyProviding <NSObject>
@property (nonatomic,readonly) NSString * uniqueName; 
@property (nonatomic,readonly) NSArray * dataStorePropertyKeys; 
@property (nonatomic,retain) NSDictionary * dataStoreProperties; 
@required
-(NSString *)uniqueName;
-(void)dataStoreDidClearAllProperties:(id)arg1 completion:(/*^block*/id)arg2;
-(NSArray *)dataStorePropertyKeys;
-(NSDictionary *)dataStoreProperties;
-(void)setDataStoreProperties:(id)arg1;

@end

