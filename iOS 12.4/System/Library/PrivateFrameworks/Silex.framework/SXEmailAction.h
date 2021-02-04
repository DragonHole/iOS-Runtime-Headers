/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAction.h>

@class NSString;

@interface SXEmailAction : SXAction {

	NSString* _recipient;
	NSString* _subject;

}

@property (nonatomic,readonly) NSString * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) NSString * subject;                //@synthesize subject=_subject - In the implementation block
-(NSString *)recipient;
-(id)initWithRecipient:(id)arg1 subject:(id)arg2 ;
-(NSString *)subject;
@end
