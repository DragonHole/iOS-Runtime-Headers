/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSRegularExpression;

@interface TIAutoshiftRegularExpressionLoader : NSObject {

	NSString* _sentenceDelimitingCharacters;
	NSString* _sentenceTrailingCharacters;
	NSString* _nextSentencePrefixCharacters;
	NSRegularExpression* _regex;

}

@property (nonatomic,readonly) NSString * sentenceDelimitingCharacters;              //@synthesize sentenceDelimitingCharacters=_sentenceDelimitingCharacters - In the implementation block
@property (nonatomic,readonly) NSString * sentenceTrailingCharacters;                //@synthesize sentenceTrailingCharacters=_sentenceTrailingCharacters - In the implementation block
@property (nonatomic,readonly) NSString * nextSentencePrefixCharacters;              //@synthesize nextSentencePrefixCharacters=_nextSentencePrefixCharacters - In the implementation block
@property (nonatomic,retain) NSRegularExpression * regex;                            //@synthesize regex=_regex - In the implementation block
+(id)loaderWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3 ;
-(NSString *)sentenceDelimitingCharacters;
-(NSString *)sentenceTrailingCharacters;
-(id)initWithSentenceDelimiters:(id)arg1 trailingChars:(id)arg2 prefixChars:(id)arg3 ;
-(void)startBackgroundLoad;
-(NSString *)nextSentencePrefixCharacters;
-(NSRegularExpression *)regex;
-(void)setRegex:(NSRegularExpression *)arg1 ;
@end

