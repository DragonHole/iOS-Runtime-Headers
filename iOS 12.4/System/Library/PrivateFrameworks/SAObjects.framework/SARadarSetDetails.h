/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SARadarSetDetails : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * classification; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * title; 
+(id)setDetails;
+(id)setDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setClassification:(NSString *)arg1 ;
-(NSString *)classification;
-(id)groupIdentifier;
-(NSString *)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setDescription:(NSString *)arg1 ;
@end

