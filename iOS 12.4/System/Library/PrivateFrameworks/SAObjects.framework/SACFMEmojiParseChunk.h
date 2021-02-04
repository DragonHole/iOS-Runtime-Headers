/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFMMessageTextParseChunk.h>

@class NSArray;

@interface SACFMEmojiParseChunk : SACFMMessageTextParseChunk

@property (assign,nonatomic) long long emojiCount; 
@property (nonatomic,copy) NSArray * inflectedEmojiList; 
+(id)emojiParseChunk;
+(id)emojiParseChunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(long long)emojiCount;
-(void)setEmojiCount:(long long)arg1 ;
-(NSArray *)inflectedEmojiList;
-(void)setInflectedEmojiList:(NSArray *)arg1 ;
-(id)groupIdentifier;
@end
