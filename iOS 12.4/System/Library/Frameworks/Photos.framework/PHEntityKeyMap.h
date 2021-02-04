/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHEntityKeyMap : NSObject {

	NSDictionary* _propertyKeysByEntityKey;
	NSDictionary* _entityKeysByPropertyKey;

}
+(NSDictionary*)transposePropertyKeysByEntityKey:(NSDictionary*)arg1 ;
+(void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(NSDictionary*)arg3 ;
-(id)initWithPropertyKeysByEntityKey:(NSDictionary*)arg1 ;
-(id)entityKeyForPropertyKey:(id)arg1 ;
-(id)propertyKeyForEntityKey:(id)arg1 ;
@end
