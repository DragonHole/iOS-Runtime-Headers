/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIHtmlView : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * html; 
+(id)htmlView;
+(id)htmlViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

