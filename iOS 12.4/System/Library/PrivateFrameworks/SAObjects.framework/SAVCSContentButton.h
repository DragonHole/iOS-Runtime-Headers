/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIButton.h>

@class NSString, NSArray, NSURL;

@interface SAVCSContentButton : SAUIButton

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSArray * togglePlayPauseCommands; 
@property (nonatomic,copy) NSURL * url; 
+(id)contentButton;
+(id)contentButtonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSArray *)togglePlayPauseCommands;
-(void)setTogglePlayPauseCommands:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)canonicalId;
@end

