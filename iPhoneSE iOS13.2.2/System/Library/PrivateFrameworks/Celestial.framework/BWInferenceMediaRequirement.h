/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceDataRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BWInferenceMediaRequirement : BWInferenceDataRequirement <NSCopying> {

	NSString* _attachedMediaKey;

}

@property (nonatomic,copy,readonly) NSString * attachedMediaKey;              //@synthesize attachedMediaKey=_attachedMediaKey - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)attachedMediaKey;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(id)initWithMediaRequirement:(id)arg1 ;
@end

