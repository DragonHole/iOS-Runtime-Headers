/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _WKTextInputContext : NSObject <NSCopying> {

	TextInputContext _textInputContext;

}

@property (nonatomic,readonly) CGRect boundingRect; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)boundingRect;
-(const TextInputContext*)_textInputContext;
-(id)_initWithTextInputContext:(const TextInputContext*)arg1 ;
@end

