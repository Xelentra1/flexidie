/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSDate, NSString;

@interface RecentCall : NSObject
{
    int _category;
    int _type;
    NSString *_destination;
    NSDate *_date;
    double _duration;
    NSString *_compositeName;
    NSString *_destinationLabel;
    NSString *_destinationLocation;
    NSString *_CNAPFirstName;
    NSString *_CNAPSecondNames;
    int _uid;
    int _identifier;
    unsigned int _destinationIsFormatted:1;
    unsigned int _destinationIsBlocked:1;
}

- (id)initWithCTCall:(struct __CTCall *)arg1 givenCountryCode:(id)arg2;
- (void)dealloc;
- (void)setCNAPFirstNameAndSecondNamesFromString:(id)arg1;
- (BOOL)canCoalesceWithCall:(id)arg1 givenCountryCode:(id)arg2;
- (int)category;
- (void)setCategory:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)setDestination:(id)arg1;
- (id)destination;
- (id)addressBookDestination;
- (id)destinationToDial;
- (id)formattedDestination;
- (BOOL)destinationIsBlocked;
- (void)setDestinationIsBlocked:(BOOL)arg1;
- (BOOL)destinationIsEmailAddress;
- (id)destinationLabel;
- (id)destinationLocation;
- (void)setDestinationLocation:(id)arg1;
- (id)numberCountryCode;
- (void)setDuration:(double)arg1;
- (double)duration;
- (void)setDate:(id)arg1;
- (id)date;
- (id)callOccurrences;
- (BOOL)representsCallAtDate:(id)arg1;
- (id)compositeName;
- (void)setUid:(int)arg1;
- (int)uid;
- (int)destinationIdentifier;
- (void)setDestinationIdentifier:(int)arg1;
- (void)uncacheIdentity;
@property(copy) NSString *_CNAPSecondNames; // @synthesize _CNAPSecondNames;
@property(copy) NSString *_CNAPFirstName; // @synthesize _CNAPFirstName;

@end
