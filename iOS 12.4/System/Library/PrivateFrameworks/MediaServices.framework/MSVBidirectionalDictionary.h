/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface MSVBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSMutableDictionary* _keyToObjectDictionary;
	NSMutableDictionary* _objectToKeyDictionary;

}
+(id)bidirectionalDictionary;
+(BOOL)supportsSecureCoding;
-(id)keyForObject:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)allKeys;
@end

