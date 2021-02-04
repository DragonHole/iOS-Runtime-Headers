/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUserActivity.h>

@class NSArray, NSString, NSDictionary, NSURL;

@interface SAClientUserActivity : SAUserActivity

@property (nonatomic,copy) NSArray * keywords; 
@property (nonatomic,copy) NSArray * requiredUserInfoKeys; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSURL * webpageURL; 
+(id)clientUserActivity;
+(id)clientUserActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(NSArray *)requiredUserInfoKeys;
-(void)setRequiredUserInfoKeys:(NSArray *)arg1 ;
-(id)encodedClassName;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSArray *)keywords;
-(id)groupIdentifier;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
@end
