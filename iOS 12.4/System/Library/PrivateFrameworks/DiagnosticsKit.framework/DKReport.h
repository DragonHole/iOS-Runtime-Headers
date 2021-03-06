/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DKReport : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _components;

}

@property (nonatomic,readonly) NSArray * components;              //@synthesize components=_components - In the implementation block
+(id)reportWithComponents:(NSArray*)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithComponents:(NSArray*)arg1 ;
-(id)reportByMergingReport:(id)arg1 ;
-(id)arrayForJSON;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSArray *)components;
@end

