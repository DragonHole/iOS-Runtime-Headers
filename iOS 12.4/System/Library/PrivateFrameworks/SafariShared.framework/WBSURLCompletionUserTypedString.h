/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding> {

	NSString* _string;
	const unsigned short* _unichars;
	const char* _chars;
	int _length;
	BOOL _containsAnySpaces;
	BOOL _ownsUnichars;
	BOOL _ownsChars;

}

@property (nonatomic,readonly) NSString * normalizedString;              //@synthesize string=_string - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(NSString *)normalizedString;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
@end

