/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSScanner.h>

@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {

	NSString* scanString;
	NSCharacterSet* skipSet;
	NSCharacterSet* invertedSkipSet;
	id locale;
	unsigned long long scanLocation;
	struct {
		unsigned caseSensitive : 1;
		unsigned  : 31;
	}  flags;

}
-(id)string;
-(void)dealloc;
-(void)setLocale:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)locale;
-(unsigned long long)scanLocation;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(void)setCharactersToBeSkipped:(id)arg1 ;
-(BOOL)scanInt:(int*)arg1 ;
-(id)charactersToBeSkipped;
-(BOOL)caseSensitive;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)scanLongLong:(long long*)arg1 ;
-(id)_invertedSkipSet;
@end

