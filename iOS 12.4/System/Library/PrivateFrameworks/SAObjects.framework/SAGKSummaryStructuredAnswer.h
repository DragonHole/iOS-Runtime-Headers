/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAGKStructuredAnswer.h>

@class NSString, NSArray, NSURL;

@interface SAGKSummaryStructuredAnswer : AceObject <SAGKStructuredAnswer>

@property (nonatomic,copy) NSArray * answerPropertyGroups; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSString * imageCaption; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * titleAnnotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)summaryStructuredAnswer;
+(id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)answerPropertyGroups;
-(void)setAnswerPropertyGroups:(NSArray *)arg1 ;
-(NSString *)imageCaption;
-(void)setImageCaption:(NSString *)arg1 ;
-(NSString *)titleAnnotation;
-(void)setTitleAnnotation:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(NSURL *)arg1 ;
-(NSURL *)image;
-(NSString *)title;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
@end

