/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol AMSBagDataSourceProtocol <NSObject>
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy) id dataSourceChangedHandler; 
@property (nonatomic,copy) id dataSourceDataInvalidatedHandler; 
@optional
-(id)dataSourceDataInvalidatedHandler;
-(id)dataSourceChangedHandler;
-(void)setDataSourceChangedHandler:(/*^block*/id)arg1;
-(void)setDataSourceDataInvalidatedHandler:(/*^block*/id)arg1;

@required
-(BOOL)isLoaded;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(NSString *)profileVersion;
-(id)bagKeyInfoForKey:(id)arg1;
-(id)valueForURLVariable:(id)arg1 account:(id)arg2;
-(void)loadWithCompletion:(/*^block*/id)arg1;

@end

