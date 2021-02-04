/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSBagProtocol.h>

@class NSDate, NSString, AMSBagFrozenDataSource;

@interface AMSSnapshotBag : NSObject <AMSBagProtocol> {

	NSDate* _creationDate;
	AMSBagFrozenDataSource* _dataSource;

}

@property (nonatomic,retain) AMSBagFrozenDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                          //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
-(NSString *)profileVersion;
-(id)doubleForKey:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(NSDate *)creationDate;
-(NSString *)profile;
-(id)arrayForKey:(id)arg1 ;
-(BOOL)isExpired;
-(id)URLForKey:(id)arg1 ;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isLoaded;
-(AMSBagFrozenDataSource *)dataSource;
-(void)setDataSource:(AMSBagFrozenDataSource *)arg1 ;
-(id)boolForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
@end
