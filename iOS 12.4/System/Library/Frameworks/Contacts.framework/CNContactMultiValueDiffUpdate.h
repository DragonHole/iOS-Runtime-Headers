/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactUpdate.h>

@class CNMultiValuePropertyDescription, CNMultiValueDiff;

@interface CNContactMultiValueDiffUpdate : CNContactUpdate {

	CNMultiValuePropertyDescription* _property;
	CNMultiValueDiff* _diff;

}

@property (readonly) CNMultiValuePropertyDescription * property;              //@synthesize property=_property - In the implementation block
@property (readonly) CNMultiValueDiff * diff;                                 //@synthesize diff=_diff - In the implementation block
-(CNMultiValueDiff *)diff;
-(BOOL)applyToABPerson:(void*)arg1 withPropertiesContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithProperty:(id)arg1 diff:(id)arg2 ;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(CNMultiValuePropertyDescription *)property;
-(id)description;
@end

