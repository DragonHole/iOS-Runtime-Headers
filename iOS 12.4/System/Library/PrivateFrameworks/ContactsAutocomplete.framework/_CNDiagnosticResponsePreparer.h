/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/_CNAutocompleteResponsePreparerDecorator.h>

@protocol CNFuture;
@interface _CNDiagnosticResponsePreparer : _CNAutocompleteResponsePreparerDecorator {

	id<CNFuture> _logFuture;

}

@property (readonly) id<CNFuture> logFuture;              //@synthesize logFuture=_logFuture - In the implementation block
-(id)prepareResults:(id)arg1 ;
-(id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 log:(/*^block*/id)arg3 ;
-(id<CNFuture>)logFuture;
@end

