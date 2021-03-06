/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HFSimpleFormatter : NSFormatter <NSCopying> {

	/*^block*/id _formatterBlock;
	/*^block*/id _attributedFormatterBlock;

}

@property (nonatomic,copy,readonly) id formatterBlock;                        //@synthesize formatterBlock=_formatterBlock - In the implementation block
@property (nonatomic,copy,readonly) id attributedFormatterBlock;              //@synthesize attributedFormatterBlock=_attributedFormatterBlock - In the implementation block
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(id)initWithFormatterBlock:(/*^block*/id)arg1 ;
-(id)formatterBlock;
-(id)attributedFormatterBlock;
-(id)initWithAttributedFormatterBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
@end

