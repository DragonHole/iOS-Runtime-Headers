/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIMonogramImage : SearchUIImage {

	NSString* _letters;

}

@property (retain) NSString * letters;              //@synthesize letters=_letters - In the implementation block
+(id)avatarImageRenderer;
-(id)initWithSFImage:(id)arg1 ;
-(void)setLetters:(NSString *)arg1 ;
-(NSString *)letters;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
@end

