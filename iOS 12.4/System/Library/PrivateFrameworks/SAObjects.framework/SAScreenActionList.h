/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAbstractItemList.h>

@class NSString, NSURL;

@interface SAScreenActionList : SAAbstractItemList

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSString * mainEntitySemanticData; 
@property (nonatomic,copy) NSURL * viewId; 
+(id)listWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)list;
-(void)setAppId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)mainEntitySemanticData;
-(void)setMainEntitySemanticData:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setViewId:(NSURL *)arg1 ;
-(NSURL *)viewId;
-(NSString *)appId;
@end
