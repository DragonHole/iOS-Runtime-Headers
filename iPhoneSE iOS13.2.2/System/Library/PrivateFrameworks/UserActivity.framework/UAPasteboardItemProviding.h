/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSString;


@protocol UAPasteboardItemProviding <NSObject>
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,copy) NSString * type; 
@required
-(NSString *)type;
-(void)setType:(id)arg1;
-(NSUUID *)uuid;
-(void)setUuid:(id)arg1;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1;

@end
