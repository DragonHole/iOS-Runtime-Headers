/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRTextEditingAttributes.h>

@class NSString;

@interface MRMutableTextEditingAttributes : MRTextEditingAttributes

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * prompt; 
@property (assign,nonatomic) MRTextInputTraits inputTraits; 
-(void)setInputTraits:(MRTextInputTraits)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPrompt:(NSString *)arg1 ;
@end

