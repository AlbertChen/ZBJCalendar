//
//  ZBJCalendarShowCell.h
//  ZBJCalendar
//
//  Created by wanggang on 3/15/16.
//  Copyright © 2016 ZBJ. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef CF_ENUM(NSInteger, ZBJCalendarCellState) {
    ZBJCalendarCellStateEmpty,
    ZBJCalendarCellStateDisabled,
    ZBJCalendarCellStateAvaible,
    ZBJCalendarCellStateUnavaible,
};

@interface ZBJCalendarShowCell : UICollectionViewCell

@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) NSNumber *price;

@property (nonatomic, assign) ZBJCalendarCellState cellState;

@end
