/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class SAUIConfirmationOptions, SAUISash, NSString;

@interface SAUISnippet : SAAceView

@property (assign,nonatomic) long long category; 
@property (nonatomic,retain) SAUIConfirmationOptions * confirmationOptions; 
@property (nonatomic,retain) SAUISash * sash; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * summaryTitle; 
@property (nonatomic,copy) NSString * title; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)category;
-(void)setCategory:(long long)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)summaryTitle;
-(SAUIConfirmationOptions *)confirmationOptions;
-(void)setConfirmationOptions:(SAUIConfirmationOptions *)arg1 ;
-(SAUISash *)sash;
-(void)setSash:(SAUISash *)arg1 ;
-(void)setSummaryTitle:(NSString *)arg1 ;
@end
