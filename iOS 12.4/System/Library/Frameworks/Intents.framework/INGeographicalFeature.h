/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface INGeographicalFeature : NSObject <NSCopying, NSSecureCoding> {

	NSString* _geographicalFeatureType;
	NSArray* _geographicalFeatureDescriptors;

}

@property (nonatomic,copy,readonly) NSString * geographicalFeatureType;                    //@synthesize geographicalFeatureType=_geographicalFeatureType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * geographicalFeatureDescriptors;              //@synthesize geographicalFeatureDescriptors=_geographicalFeatureDescriptors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithGeographicalFeatureType:(id)arg1 geographicalFeatureDescriptors:(id)arg2 ;
-(NSArray *)geographicalFeatureDescriptors;
-(NSString *)geographicalFeatureType;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

