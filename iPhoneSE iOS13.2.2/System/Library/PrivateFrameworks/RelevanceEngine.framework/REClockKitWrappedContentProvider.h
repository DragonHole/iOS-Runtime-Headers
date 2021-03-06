/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:10 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class CLKTextProvider;

@interface REClockKitWrappedContentProvider : RETextContentProvider {

	CLKTextProvider* _clockKitTextProvider;

}

@property (nonatomic,readonly) CLKTextProvider * clockKitTextProvider;              //@synthesize clockKitTextProvider=_clockKitTextProvider - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(CLKTextProvider *)clockKitTextProvider;
-(id)initWithClockKitTextProvider:(id)arg1 ;
@end

