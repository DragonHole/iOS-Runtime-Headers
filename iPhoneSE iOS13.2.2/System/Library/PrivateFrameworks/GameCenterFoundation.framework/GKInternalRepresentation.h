/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)internalRepresentation;
+(id)secureCodedPropertyKeys;
+(id)codedPropertyKeys;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(void)mergePropertiesFrom:(id)arg1 ;
@end
