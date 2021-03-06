/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	BOOL _primary;

}
-(void)addType:(id)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)addTypes:(id)arg1 ;
-(BOOL)isPrimary;
-(void)finalize;
-(id)grouping;
-(void)setGrouping:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)description;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)types;
@end

