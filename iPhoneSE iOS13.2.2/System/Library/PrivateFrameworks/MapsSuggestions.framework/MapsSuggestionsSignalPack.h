/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MapsSuggestionsSignalPack : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	SignalPack* _innerSignalPack;

}
+(BOOL)supportsSecureCoding;
+(id)extractFromDestinationMapItem:(GEOMapItemStorage*)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 ;
+(id)extractFromDestinationEntry:(id)arg1 originCoordinate:(CLLocationCoordinate2D)arg2 ;
+(id)signalPackFromData:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)mutableCopy;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(id)initWithSignalPack:(id)arg1 ;
-(BOOL)mergeIntoSignalPack:(id)arg1 ;
-(BOOL)hasType:(long long)arg1 ;
-(float)valueForSignalType:(long long)arg1 ;
-(SignalPack*)innerSignalPack;
-(id)encodedFeatureDictionary;
@end

