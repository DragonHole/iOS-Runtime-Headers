/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestination.h>

@class ENGroup;

@interface IDSDestinationEngram : IDSDestination {

	ENGroup* _underlyingGroup;

}

@property (nonatomic,retain,readonly) ENGroup * underlyingGroup;              //@synthesize underlyingGroup=_underlyingGroup - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)destinationURIs;
-(id)initWithENGroup:(id)arg1 ;
-(ENGroup *)underlyingGroup;
-(id)groupID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

