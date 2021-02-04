/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SADecoratedString;

@interface SASTBodyTextItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSString * bodyText; 
@property (nonatomic,retain) SADecoratedString * decoratedBodyText; 
@property (nonatomic,copy) NSString * position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bodyTextItem;
+(id)bodyTextItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(SADecoratedString *)decoratedBodyText;
-(void)setDecoratedBodyText:(SADecoratedString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)alignment;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)setAlignment:(NSString *)arg1 ;
-(void)setPosition:(NSString *)arg1 ;
-(NSString *)position;
@end
