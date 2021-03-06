/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupSnippetTemplate.h>

@class SAUIColor, SAIntentGroupDetailLabelTemplateComponent, SALocation, NSString;

@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic,retain) SAUIColor * color; 
@property (nonatomic,retain) SAIntentGroupDetailLabelTemplateComponent * detailLabelComponent; 
@property (assign,nonatomic) BOOL interactive; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * mapSize; 
@property (nonatomic,retain) id<SAIntentGroupSetMapLocation> updateLocationCommand; 
+(id)mapSnippetTemplate;
+(id)mapSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(SAIntentGroupDetailLabelTemplateComponent *)detailLabelComponent;
-(void)setDetailLabelComponent:(SAIntentGroupDetailLabelTemplateComponent *)arg1 ;
-(NSString *)mapSize;
-(void)setMapSize:(NSString *)arg1 ;
-(id<SAIntentGroupSetMapLocation>)updateLocationCommand;
-(void)setUpdateLocationCommand:(id<SAIntentGroupSetMapLocation>)arg1 ;
-(id)groupIdentifier;
-(SAUIColor *)color;
-(void)setColor:(SAUIColor *)arg1 ;
-(BOOL)interactive;
-(SALocation *)location;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
@end

