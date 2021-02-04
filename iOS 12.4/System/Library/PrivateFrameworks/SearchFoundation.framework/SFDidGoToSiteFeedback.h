/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFDidGoToSiteFeedback : SFFeedback {

	NSString* _input;

}

@property (nonatomic,copy) NSString * input;              //@synthesize input=_input - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setInput:(NSString *)arg1 ;
-(id)initWithInput:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)input;
@end
