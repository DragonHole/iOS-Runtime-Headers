/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString;

@interface SASportsNewsItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * link; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newsItem;
+(id)newsItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(id)encodedClassName;
@end

