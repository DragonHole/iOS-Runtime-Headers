/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAddition.h>

@class NSString, NSURL, SXFormattedText;

@interface SXCalendarEventAddition : SXAddition

@property (nonatomic,readonly) NSString * startDate; 
@property (nonatomic,readonly) NSString * endDate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * location; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) SXFormattedText * notes; 
+(id)typeString;
-(SXFormattedText *)notes;
-(NSURL *)URL;
-(NSString *)location;
-(NSString *)title;
-(NSString *)endDate;
-(NSString *)startDate;
-(id)URLWithValue:(id)arg1 withType:(int)arg2 ;
-(id)notesWithValue:(id)arg1 withType:(int)arg2 ;
@end

