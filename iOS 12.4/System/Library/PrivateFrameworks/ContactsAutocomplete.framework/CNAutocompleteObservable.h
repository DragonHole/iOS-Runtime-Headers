/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@class NSString, CNObservable;

@interface CNAutocompleteObservable : CNObservable {

	NSString* _debugDescription;
	CNObservable* _observable;

}

@property (nonatomic,retain) CNObservable * observable;                //@synthesize observable=_observable - In the implementation block
@property (nonatomic,retain) NSString * debugDescription;              //@synthesize debugDescription=_debugDescription - In the implementation block
-(void)setObservable:(CNObservable *)arg1 ;
-(id)subscribe:(id)arg1 ;
-(void)setDebugDescription:(NSString *)arg1 ;
-(CNObservable *)observable;
-(NSString *)debugDescription;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
